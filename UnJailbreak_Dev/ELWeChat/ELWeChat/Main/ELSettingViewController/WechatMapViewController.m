//
//  MDMapViewController.m
//  MDMapView
//
//  Created by AloneMonkey on 2017/11/2.
//  Copyright © 2017年 MonkeyDev. All rights reserved.
//

#import "WechatMapViewController.h"
#import "ELAppManage.h"
#import <MapKit/MapKit.h>

@interface WechatMapViewController()<MKMapViewDelegate,UIGestureRecognizerDelegate>

@property (nonatomic, strong) MKMapView *mapView;
@property (nonatomic, strong) MKPointAnnotation* mapPoint;
@property (nonatomic, strong) UIBarButtonItem* backButtonItem;
@property (nonatomic, strong) UIBarButtonItem* closeButtonItem;

@end

@implementation WechatMapViewController


/**
 初始化方法

 @return 返回本身
 */
- (instancetype)init
{
    self = [super init];
    if (self) {
        _mapPoint = [[MKPointAnnotation alloc] init];
    }
    return self;
}

-(void)viewDidLoad{
    [super viewDidLoad];
    [self setupSubviews];
}

-(void)setupSubviews{
    //设置导航栏标题
    self.title = @"我的位置";
    //初始化地图视图并设置位置和大小
    _mapView = [[MKMapView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.bounds), CGRectGetHeight(self.view.bounds))];
    //设置是否在地图上显示用户的位置
    _mapView.showsUserLocation = YES;
    //设置地图上跟随用户
    _mapView.userTrackingMode = MKUserTrackingModeFollow;
    //给地图添加点击事件
    UITapGestureRecognizer* gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(click:)];
    //设置代理为本类
    gesture.delegate = self;
    //将手势添加到地图视图
    [_mapView addGestureRecognizer:gesture];
    //将地图展示出来
    [self.view addSubview:_mapView];
    
    //设置导航栏左、右按钮
    self.navigationItem.leftBarButtonItem = self.backButtonItem;
    self.navigationItem.rightBarButtonItem = self.closeButtonItem;
}


/**
 点击地图事件

 @param gesture UITapGestureRecognizer手势
 */
- (void)click:(UITapGestureRecognizer*) gesture{
    //判断gesture是否为空
    if(gesture){
        //移除注解
        [_mapView removeAnnotations:_mapView.annotations];
        //在地图上创建画笔
        CGPoint point = [gesture locationInView:_mapView];
        //将画笔在地图上的位置获取经纬度
        CLLocationCoordinate2D location = [_mapView convertPoint:point toCoordinateFromView:_mapView];
        //给我的位置标签设置位置
        [_mapPoint setCoordinate:location];
        //将我的位置标签在地图上标出来
        [_mapView addAnnotation:_mapPoint];
        
//        self.field.value    
        //将点击的位置信息保存到插件的配置信息文件
        [ELAppManage sharedManage].appConfig.mLocation = location;
        
        //设置标题为点击的位置信息
        self.title = [NSString stringWithFormat:@"%0.3f, %0.3f",
                      location.latitude, location.longitude];
    }
}


/**
 导航栏左上角返回按钮

 @return 返回按钮
 */
- (UIBarButtonItem *)backButtonItem {
    //判断按钮是否为空
    if (!_backButtonItem) {
        //声明按钮并设置标题和风格以及点击事件
        UIBarButtonItem *backButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(back)];
        _backButtonItem = backButtonItem;
    }
    return _backButtonItem;
}


/**
 导航栏右上角按钮

 @return 清除位置按钮
 */
- (UIBarButtonItem *)closeButtonItem {
    //判断按钮是否为空
    if (!_closeButtonItem) {
        //声明按钮并设置标题和风格以及点击事件
        UIBarButtonItem *closeButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"清除位置" style:UIBarButtonItemStylePlain target:self action:@selector(clearAndExit)];
        _closeButtonItem = closeButtonItem;
    }
    return _closeButtonItem;
}


/**
 导航栏左上角返回按钮点击事件
 */
-(void)back{
//    //判断navigationController是否为空
//    if(self.navigationController){
//        //返回上一层界面
//        [self.navigationController popViewControllerAnimated:YES];
//    }
//    //判断presentedViewController是否为空
//    else if([self presentedViewController]){
//        //关闭页面
//        [self dismissViewControllerAnimated:YES completion:nil];
//    }
    
    //关闭页面
    [self dismissViewControllerAnimated:YES completion:nil];
    
    //释放地图视图
    _mapView.userTrackingMode  = MKUserTrackingModeNone;
    _mapView.showsUserLocation = NO;
    [_mapView removeAnnotations:_mapView.annotations];
    _mapView.delegate = nil;
}


/**
 导航栏右上角清除位置点击事件
 清除位置信息并返回事件
 */
-(void)clearAndExit{
    //设置插件配置信息文件中的位置信息为0，0
    [ELAppManage sharedManage].appConfig.mLocation = CLLocationCoordinate2DMake(0,0);
    //返回
    [self back];
}

@end
