/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"

@class NSURL;

@interface SBCallPermissionAlertItem : SBAlertItem {
	NSURL *_url;
}
-(id)initWithURL:(id)url;
-(void)dealloc;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
@end

