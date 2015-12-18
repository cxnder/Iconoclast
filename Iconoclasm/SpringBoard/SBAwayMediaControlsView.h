/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/Foundation.h>
#import "SpringBoard-Structs.h"

@class UIButton, UILabel, UISlider, UIPushButton, MPAudioDeviceController;

@interface SBAwayMediaControlsView : UIView {
	unsigned _beganSeeking : 1;
	int _seekingDirection;
	UIPushButton *_prevButton;
	UIPushButton *_nextButton;
	UIPushButton *_playPauseButton;
	UISlider *_slider;
	UIButton *_routeButton;
	UILabel *_routeLabel;
	MPAudioDeviceController *_audioDeviceController;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)_createButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
-(void)layoutSubviews;
-(void)_showRouteButton:(BOOL)button volumeSlider:(BOOL)slider animated:(BOOL)animated;
-(CGRect)_sliderFrameWithRouteButton:(BOOL)routeButton;
-(void)_updateInformation;
-(void)setAlpha:(float)alpha;
-(void)removeFromSuperview;
-(void)_playPauseButtonAction:(id)action;
-(void)_changeTrackButtonDown:(id)down;
-(void)_changeTrackButtonUp:(id)up;
-(void)_changeTrackButtonTouchPause:(id)pause;
-(void)_volumeChange:(id)change;
-(void)_showAudioRoutes:(id)routes;
-(void)_registerForNowPlayingNotifications;
-(void)_unregisterForNowPlayingNotifications;
-(void)_registerForVolumeNotifications;
-(void)_unregisterForVolumeNotifications;
-(void)_nowPlayingChanged:(id)changed;
-(void)_systemVolumeChanged:(id)changed;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)audioDeviceControllerMediaServerDied:(id)died;
@end

