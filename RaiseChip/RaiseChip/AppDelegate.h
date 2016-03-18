//
//  AppDelegate.h
//  RaiseChip
//
//  Created by IMAC on 16/2/25.
//  Copyright © 2016年 ysc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) UIImageView *line;
@property (weak, nonatomic)  UIButton *lockBtn;
@property (weak, nonatomic)  UIButton *unlockBtn;
@end

