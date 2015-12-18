/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, NSDate;

@interface SBSleepProofTimer : NSObject {
	NSDate *_fireDate;
	id _target;
	SEL _selector;
	NSString *_identifier;
	NSTimer *_timer;
	NSTimer *_preventSleepTimer;
	BOOL _isWakeScheduled;
	void *_powerAssertion;
}
@property(readonly, retain) NSDate *fireDate;
+(id)scheduledTimerWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector identifier:(id)identifier;
-(id)initWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector identifier:(id)identifier;
-(void)dealloc;
-(void)_invalidateTimers;
-(void)_scheduleTimers;
-(void)_setWakeScheduled:(BOOL)scheduled;
-(void)_holdPowerAssertion:(BOOL)assertion;
-(void)_preventSleepTimerFired:(id)fired;
-(void)_timerFired:(id)fired;
-(void)_wokeFromSleep;
-(void)_significantTimeChanged;
-(id)_preventSleepFromDate;
-(id)_wakeDate;
-(void)cancel;
@end

