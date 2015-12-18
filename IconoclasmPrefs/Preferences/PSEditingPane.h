/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

//#import "UIView.h"

@class PSSpecifier;

@interface PSEditingPane : UIView
{
    PSSpecifier *_specifier;
    id _delegate;
    unsigned int _requiresKeyboard:1;
}

+ (struct CGSize)defaultSize;
+ (id)defaultBackgroundColor;
- (id)initWithFrame:(struct CGRect)fp8;
- (BOOL)drawLabel;
- (struct CGRect)contentRect;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (void)setPreferenceSpecifier:(id)fp8;
- (id)preferenceSpecifier;
- (void)setPreferenceValue:(id)fp8;
- (id)preferenceValue;
- (BOOL)requiresKeyboard;
- (void)drawPinstripesInRect:(struct CGRect)fp8;
- (id)specifierLabel;
- (void)drawLabelInRect:(struct CGRect)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)wantsNewButton;
- (void)addNewValue;
- (void)editMode;
- (void)doneEditing;
- (BOOL)handlesDoneButton;
- (BOOL)changed;

@end

