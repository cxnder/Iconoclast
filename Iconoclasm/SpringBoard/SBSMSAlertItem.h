/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"

@class NSString, CKMessage;

@interface SBSMSAlertItem : SBAlertItem {
	CKMessage *_message;
	int _alignment;
	BOOL _alignmentHasBeenSet;
	BOOL _displayingEntireMessage;
	BOOL _playedSound;
	NSString *_name;
}
@property(readonly, retain) NSString *name;
+(BOOL)shouldPlayMessageReceived;
+(void)playMessageReceived;
+(void)prefsChanged;
+(BOOL)_showSMSPreview;
+(BOOL)shouldHideSMSPreview;
-(void)dealloc;
-(void)_tag;
-(void)_untag;
-(void)_deactivateAllTaggedSMSAlertItems;
-(void)willActivate;
-(void)didDeactivateForReason:(int)reason;
-(void)setMessage:(id)message;
-(void)willPresentAlertSheet:(id)sheet;
-(id)address;
-(BOOL)senderIsVoicemail;
-(BOOL)hasAttachments;
-(id)messageText;
-(id)alertImageData;
-(int)_groupID;
-(void)reply;
-(Class)alertSheetClass;
-(id)alertSheet;
-(void)_markReadIfDisplayingEntireMessage;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(int)bodyTextAlignmentForAlertSheet:(id)alertSheet displayedLineCount:(int)count;
-(void)performUnlockAction;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
-(BOOL)willShowInAwayItems;
-(BOOL)shouldShowInEmergencyCall;
@end

