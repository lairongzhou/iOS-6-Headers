/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAwaySystemAlertCell.h"

@interface SBAwaySystemAlertFloatingCell : SBAwaySystemAlertCell
{
}

+ (float)_cellContentExtraPadding;
+ (float)_cellContentTopPadding;
+ (float)_cellContentRightPadding;
+ (float)_cellContentLeftPadding;
+ (float)_buttonVerticalInset;
+ (float)_buttonHorizontalInset;
+ (id)_buttonFont;
+ (id)_cancelButtonBackgroundImage;
+ (id)_buttonBackgroundImage;
+ (id)_alarmButtonBackgroundImage;
+ (float)rowHeightForTitle:(id)arg1 message:(id)arg2 rowWidth:(float)arg3 buttonLabels:(id)arg4;
+ (float)_rowHeightForContentHeight:(float)arg1;
- (void)layoutSubviews;
- (void)_clearButtonHandler;
- (void)_getButtonWidth:(float *)arg1 inset:(float *)arg2;
- (struct CGRect)_cellContentViewFrame;
- (struct CGRect)_contentRect;
- (BOOL)_drawsSeparator;
- (void)setButtonLabels:(id)arg1 handler:(id)arg2 isAlarm:(BOOL)arg3;
- (void)setIconImage:(id)arg1;
- (BOOL)_hasBackgroundColor;
- (void)_createContentView;

@end
