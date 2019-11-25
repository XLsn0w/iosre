//
//  ELRedEnvelopInfo.h
//  ELWeChatDylib
//
//  Created by Eli on 2018/10/10.
//  Copyright © 2018年 eli. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ELRedEnvelopInfo : NSObject

//消息类型
@property(nonatomic,copy)NSString *msgtype;
//渠道id
@property(nonatomic,copy)NSString *channelid;
//发送id
@property(nonatomic,copy)NSString *sendid;
//昵称
@property(nonatomic,copy)NSString *nickName;
//头像
@property(nonatomic,copy)NSString *headImg;
//
@property(nonatomic,copy)NSString *nativeUrl;
//
@property(nonatomic,copy)NSString *sessionUserName;

@property(nonatomic,copy)NSString *timingIdentifier;
//发送用户名称
@property(nonatomic,copy)NSString *sendusername;

@property(nonatomic,copy)NSString *ver;
//签名
@property(nonatomic,copy)NSString *sign;
//是否是自己发送的消息
@property(nonatomic,assign)BOOL isMyself;

//保存红包信息
- (BOOL)saveRedInfo:(ELRedEnvelopInfo *)info;
//请求字典
- (NSDictionary *)requestDict;


@end
