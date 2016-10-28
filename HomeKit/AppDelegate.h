//
//  AppDelegate.h
//  HomeKit
//
//  Created by 可米小子 on 16/10/27.
//  Copyright © 2016年 可米小子. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kUseScreenShotGesture 1

#if kUseScreenShotGesture
#import "ScreenShotView.h"
#endif

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


#if kUseScreenShotGesture
@property (strong, nonatomic) ScreenShotView *screenshotView;
#endif
@end

