//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WloginUserInfo : NSObject <NSCoding>
{
    unsigned int dwUserUin;
    NSString *sUserMainAccount;
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
}

@property unsigned char cAge; // @synthesize cAge;
@property unsigned char cGender; // @synthesize cGender;
- (void)dealloc;
- (id)description;
@property unsigned int dwUserUin; // @synthesize dwUserUin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain) NSString *sNickName; // @synthesize sNickName;
@property(retain) NSString *sUserMainAccount; // @synthesize sUserMainAccount;
@property unsigned short wFaceId; // @synthesize wFaceId;
- (id)userinfo;

@end

