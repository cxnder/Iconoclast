/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SpringBoard-Structs.h"
#import <SystemConfiguration/SystemConfiguration.h>

@class SBEmergencyCallButton, UIImage, UIPushButton;

@interface SBDeviceLockKeypad : TPPhonePad {
	UIImage *_deleteIcon;
	UIPushButton *_deleteButton;
	SBEmergencyCallButton *_emergencyCallButton;
	BOOL _showDeleteIcon;
	BOOL _playKeyboardClicks;
}
@property(assign) BOOL showsEmergencyCallButton;
-(id)initWithFrame:(CGRect)frame;
-(void)setPlaysKeyboardClicks:(BOOL)clicks;
-(void)dealloc;
-(void)setShowsDeleteIcon:(BOOL)icon;
-(id)_pressedImage;
-(void)hiddenFromView;
-(void)willBecomeVisible;
-(id)_keypadImage;
-(float)_yFudge;
@end

