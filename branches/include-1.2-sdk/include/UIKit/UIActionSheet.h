/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIButtonBar.h>
#import <UIKit/UIKeyboard.h>
#import <UIKit/UIPushButton.h>
#import <UIKit/UITable.h>
#import <UIKit/UITextLabel.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIModalView.h>

@interface UIActionSheet : UIModalView
{
}

- (void)setDestructiveButtonIndex:(int)fp8;
- (void)showInView:(id)fp8;
- (void)showFromToolbar:(id)fp8;
#define setAlertSheetStyle setActionSheetStyle
- (void)setActionSheetStyle:(int)fp8;    // IMP=0x324154dc
#define alertSheetStyle actionSheetStyle
- (int)actionSheetStyle; // IMP=0x324154cc


@end
