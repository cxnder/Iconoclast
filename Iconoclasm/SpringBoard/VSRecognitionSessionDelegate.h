/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>


@protocol VSRecognitionSessionDelegate <NSObject>
@optional
-(BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
-(void)recognitionSessionDidBeginAction:(id)recognitionSession;
-(id)recognitionSession:(id)session openURL:(id)url;
-(void)recognitionSession:(id)session didCompleteActionWithError:(id)error;
@end

