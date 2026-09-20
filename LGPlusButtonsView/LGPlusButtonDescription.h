//
// LGPlusButtonDescription.h
// LGPlusButtonsView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>
#import "LGPlusButtonsView.h"

@interface LGPlusButtonDescription : UILabel

- (void)updateParametersForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setFont:(UIFont *)font forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIFont *)fontForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setInsets:(UIEdgeInsets)insets forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIEdgeInsets)insetsForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setOffset:(CGPoint)offset forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGPoint)offsetForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setSize:(CGSize)size forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGSize)sizeForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setContentEdgeInsets:(UIEdgeInsets)contentEdgeInsets forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (UIEdgeInsets)contentEdgeInsetsForOrientation:(LGPlusButtonsViewOrientation)orientation;

- (void)setLayerCornerRadius:(CGFloat)cornerRadius forOrientation:(LGPlusButtonsViewOrientation)orientation;
- (CGFloat)layerCornerRadiusForOrientation:(LGPlusButtonsViewOrientation)orientation;

@end
