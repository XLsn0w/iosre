#import <Foundation/Foundation.h>
 
@interface RevealUtil : NSObject {
    @private
  		void* revealLib;
}
 
- (void)startReveal;
- (void)stopReveal;
 
@end