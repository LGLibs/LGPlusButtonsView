//
// LGPlusButton.h
// LGPlusButtonsView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>
#import "LGPlusButtonsView.h"

@interface LGPlusButton : UIButton

@property (assign, nonatomic, getter=isShowing) BOOL showing;

- (void)updateParametersForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setImage:(UIImage *)image forState:(UIControlState)state forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIImage *)imageForState:(UIControlState)state forOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setTitleFont:(UIFont *)font forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIFont *)titleFontForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setInsets:(UIEdgeInsets)insets forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIEdgeInsets)insetsForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setOffset:(CGPoint)offset forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGPoint)offsetForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setSize:(CGSize)size forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGSize)sizeForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setContentEdgeInsets:(UIEdgeInsets)contentEdgeInsets forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIEdgeInsets)contentEdgeInsetsForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setTitleOffset:(CGPoint)titleOffset forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGPoint)titleOffsetForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setImageOffset:(CGPoint)imageOffset forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGPoint)imageOffsetForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;
- (UIColor *)backgroundColorForState:(UIControlState)state;

- (void)setLayerCornerRadius:(CGFloat)cornerRadius forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGFloat)layerCornerRadiusForOrientation:(LGPlusButtonsViewOrientation)orientation;

/** Unavailable, use titleOffset and imageOffset instead */
- (void)setContentHorizontalAlignment:(UIControlContentHorizontalAlignment)contentHorizontalAlignment __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (UIControlContentHorizontalAlignment)contentHorizontalAlignment                                     __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (void)setContentVerticalAlignment:(UIControlContentVerticalAlignment)contentVerticalAlignment       __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (UIControlContentVerticalAlignment)contentVerticalAlignment                                         __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (void)setTitleEdgeInsets:(UIEdgeInsets)titleEdgeInsets                                              __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (UIEdgeInsets)titleEdgeInsets                                                                       __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (void)setImageEdgeInsets:(UIEdgeInsets)imageEdgeInsets                                              __attribute__((unavailable("Use titleOffset and imageOffset instead")));
/** Unavailable, use titleOffset and imageOffset instead */
- (UIEdgeInsets)imageEdgeInsets                                                                       __attribute__((unavailable("Use titleOffset and imageOffset instead")));

@end
