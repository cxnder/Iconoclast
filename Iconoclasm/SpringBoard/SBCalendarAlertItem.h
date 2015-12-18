/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBCalendarAlertItem : SBAlertItem {
	double _date;
	NSString *_title;
	NSString *_location;
	int _eventId;
	BOOL _isAllDay;
}
+(void)registerForAlerts;
+(void)alarmsDidFire:(id)alarms;
+(void)significantTimeChange;
-(id)initWithDate:(double)date title:(id)title location:(id)location eventId:(int)id isAllDay:(BOOL)day;
-(void)dealloc;
-(id)_dayString:(BOOL)string;
-(id)_timeString;
-(id)_dateString:(BOOL)string;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
-(void)didPresentAlertSheet:(id)sheet;
-(void)revealEvent;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)performUnlockAction;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)willShowInAwayItems;
-(id)awayItem;
@end

