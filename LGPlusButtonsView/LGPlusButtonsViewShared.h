//
// LGPlusButtonsViewShared.h
// LGPlusButtonsView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>
#import "LGPlusButtonsView.h"

#define kLGPlusButtonsViewMargin 4.f

@interface LGPlusButtonsViewShared : NSObject

+ (NSString *)stringFromOrientation:(LGPlusButtonsViewOrientation)orientation;
+ (NSString *)stringFromState:(UIControlState)state;
+ (NSString *)stringFromState:(UIControlState)state andOrientation:(LGPlusButtonsViewOrientation)orientation;
+ (UIImage *)image1x1WithColor:(UIColor *)color;

@end
