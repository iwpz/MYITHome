//
//  AppDelegate.h
//  MYITHome
//
//  Created by 张万平 on 16/2/19.
//  Copyright © 2016年 iwpz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainTabBarController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong)  MainTabBarController *tabBarViewController;

@end

