#import "RevealUtil.h"
#import <dlfcn.h>
 
@implementation RevealUtil
 
- (void)startReveal {
    NSString* revealLibName = @"libReveal.dylib";
    NSString* documentDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
    NSString* dyLibPath = [documentDirectory stringByAppendingPathComponent:revealLibName];
     
    revealLib = dlopen([dyLibPath cStringUsingEncoding:NSUTF8StringEncoding], RTLD_NOW);
     
    if (revealLib == nil) {
        char *error = dlerror();
        NSLog(@"dlopen error: %s", error);
 
    } else {
        [[NSNotificationCenter defaultCenter] postNotificationName:@"IBARevealRequestStart" object:self];
    }
}
 
- (void)stopReveal {
    if (revealLib != nil) {
        [[NSNotificationCenter defaultCenter] postNotificationName:@"IBARevealRequestStop" object:self];
         
        if (dlclose(revealLib) == 0) {
            revealLib = nil;
             
        } else {
            char *error = dlerror();
            NSLog(@"Reveal Library could not be unloaded: %s", error);
        }
    }
}
 
@end