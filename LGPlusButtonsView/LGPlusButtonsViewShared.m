//
// LGPlusButtonsViewShared.m
// LGPlusButtonsView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import "LGPlusButtonsViewShared.h"

@implementation LGPlusButtonsViewShared

+ (NSString *)stringFromOrientation:(LGPlusButtonsViewOrientation)orientation
{
    return [NSString stringWithFormat:@"%lu", (long unsigned)orientation];
}

+ (NSString *)stringFromState:(UIControlState)state
{
    return [NSString stringWithFormat:@"%lu", (long unsigned)state];
}

+ (NSString *)stringFromState:(UIControlState)state andOrientation:(LGPlusButtonsViewOrientation)orientation
{
    return [NSString stringWithFormat:@"%lu_%lu", (long unsigned)state, (long unsigned)orientation];
}

+ (UIImage *)image1x1WithColor:(UIColor *)color
{
    CGRect rect = CGRectMake(0.f, 0.f, 1.f, 1.f);

    UIGraphicsBeginImageContext(rect.size);

    CGContextRef context = UIGraphicsGetCurrentContext();

    CGContextSetFillColorWithColor(context, color.CGColor);
    CGContextFillRect(context, rect);

    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    return image;
}

@end
