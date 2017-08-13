//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFConversation, AFUIRequestOptions, NSArray, NSBundle, NSError, NSString, NSURL, NSUUID, SAUIAddContentToView, SAUIChangePrimaryUtterance, UIViewController;

@protocol SiriUIPresentation <NSObject>

@optional
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource;
- (void)presentationStateDidChangeForItemsAtIndexPaths:(NSArray *)arg1;
- (void)removeItemsWithIdentifiers:(NSArray *)arg1 atIndexPaths:(NSArray *)arg2;
- (void)removeItemsWithIdentifiers:(NSArray *)arg1 atIndexPaths:(NSArray *)arg2 parentItemIdentifiers:(NSArray *)arg3;
- (void)reloadItemsAtIndexPaths:(NSArray *)arg1;
- (void)insertItemsAtIndexPaths:(NSArray *)arg1;
- (_Bool)supportsTextInput;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationWillEnterForeground;
- (void)hostApplicationWillResignActive;
- (void)dismissRecordingOverlayAndHideSnippets:(_Bool)arg1;
- (void)didReceiveDismissalAction:(void (^)(void))arg1;
- (void)displayUtteranceWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2;
- (_Bool)supportsSpeechSynthesis;
- (void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;
- (void)siriDidDetectMusic;
- (_Bool)trustsURL:(NSURL *)arg1;
- (void)configureForRequestOptions:(AFUIRequestOptions *)arg1;
- (_Bool)shouldBlockURLOpenOnTTS:(NSURL *)arg1;
- (void)speechRecordingDidDetectSpeechStartpoint;
- (void)speechRecordingDidFailForRequest:(AFUIRequestOptions *)arg1 onAVRecordRoute:(NSString *)arg2 withError:(NSError *)arg3;
- (void)speechRecordingDidCancelForRequest:(AFUIRequestOptions *)arg1 onAVRecordRoute:(NSString *)arg2;
- (void)speechRecordingDidEndForRequest:(AFUIRequestOptions *)arg1 onAVRecordRoute:(NSString *)arg2;
- (void)siriNetworkAvailabilityDidChange;
- (void)changeUtterance:(SAUIChangePrimaryUtterance *)arg1;
- (void)updateSuggestedUtterances:(NSArray *)arg1 forLanguage:(NSString *)arg2;
- (NSArray *)requestContext;
- (void)setScreenSupportsTouchInteraction:(_Bool)arg1;
- (_Bool)shouldDismissForIdling;
- (double)idleTimerInterval;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (AFUIRequestOptions *)configureOptionsForImminentRequest:(AFUIRequestOptions *)arg1;
- (void)siriRequestWillStart;
- (void)siriAudioRecordingDidChangePowerLevel:(float)arg1;
- (void)siriDidStopSpeaking:(_Bool)arg1;
- (void)siriDidStartSpeaking;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlock;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;
- (void)reloadData;
- (_Bool)canSaveConversations;
- (void)startNewConversation;
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(NSUUID *)arg1 inConversation:(AFConversation *)arg2;
- (void)conversation:(AFConversation *)arg1 didChangePresentationStateForItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didRemoveItemsWithIdentifiers:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 parentItemIdentifiers:(NSArray *)arg4;
- (void)conversation:(AFConversation *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
- (_Bool)siriDidReceiveAdditionalContent:(SAUIAddContentToView *)arg1;
- (void)statusBarFrameDidChange;
- (void)userInteractionDidOccur;
- (void)siriDidDeactivate;
- (void)shortTapAction;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (UIViewController *)viewController;
- (long long)options;
- (id)initWithNibName:(NSString *)arg1 bundle:(NSBundle *)arg2 delegate:(id <SiriUIPresentationDelegate>)arg3 dataSource:(id <SiriUIPresentationDataSource>)arg4;
- (id)initWithDelegate:(id <SiriUIPresentationDelegate>)arg1 dataSource:(id <SiriUIPresentationDataSource>)arg2;
@end
