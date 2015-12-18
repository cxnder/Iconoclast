/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"


@interface SBLowPowerAlertItem : SBAlertItem {
	unsigned _talkLevel;
}
+(id)systemVersionDescription;
+(void)saveLowBatteryLogWithCapacity:(int)capacity;
+(unsigned)_thresholdForLevel:(unsigned)level;
+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)batteryLevel;
+(void)setBatteryLevel:(unsigned)level;
-(id)initWithLevel:(unsigned)level;
-(void)willPresentAlertSheet:(id)sheet;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(BOOL)shouldShowInLockScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)undimsScreen;
@end

