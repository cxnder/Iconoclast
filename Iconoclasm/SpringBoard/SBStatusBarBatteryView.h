/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBStatusBarContentView.h"
#import "SpringBoard-Structs.h"


@interface SBStatusBarBatteryView : SBStatusBarContentView {
	int _batteryCapacity;
	float _curvedCapacity;
	BOOL _batteryCharging;
	BOOL _isOnAC;
	BOOL _showBatteryView;
}
@property(assign, getter=isVisible) BOOL visible;
-(void)updateBattery;
-(void)_batteryStatusChanged:(id)changed;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(int)priority;
-(void)drawRect:(CGRect)rect;
-(float)padding;
@end

