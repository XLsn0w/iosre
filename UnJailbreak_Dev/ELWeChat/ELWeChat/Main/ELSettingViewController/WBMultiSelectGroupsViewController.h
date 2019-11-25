//
//  WBMultiSelectGroupsViewController.h
//  WeChatRedEnvelop
//
//  Created by 杨志超 on 2017/2/24.
//  Copyright © 2017年 swiftyper. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MultiSelectGroupsViewControllerDelegate <NSObject>
- (void)onMultiSelectGroupReturn:(NSArray *)arg1;

@optional
- (void)onMultiSelectGroupCancel;
@end

@interface WBMultiSelectGroupsViewController : UIViewController


/**
 初始化

 @param blackList 黑名单列表
 @return 当前类
 */
- (instancetype)initWithBlackList:(NSArray *)blackList;

@property (nonatomic, assign) id<MultiSelectGroupsViewControllerDelegate> delegate;

@end
