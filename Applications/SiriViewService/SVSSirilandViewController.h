//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFUIDebugControllerDelegate.h"
#import "AFUIStateMachineDelegate.h"
#import "RadiosPreferencesDelegate.h"
#import "SVSPagerViewControllerDelegate.h"
#import "SVSSirilandViewDelegate.h"
#import "SVSSuggestionsViewControllerDelegate.h"
#import "SVSTranscriptStackViewControllerDataSource.h"
#import "SVSTranscriptStackViewControllerDelegate.h"
#import "SiriUIPresentation.h"

@class AFUIStateMachine, NSString, RadiosPreferences, SVSPagerViewController, SVSSirilandView, SVSSuggestionsViewController, UIAlertController;

@interface SVSSirilandViewController : UIViewController <AFUIDebugControllerDelegate, SVSPagerViewControllerDelegate, SVSSirilandViewDelegate, SVSTranscriptStackViewControllerDataSource, SVSSuggestionsViewControllerDelegate, SVSTranscriptStackViewControllerDelegate, RadiosPreferencesDelegate, AFUIStateMachineDelegate, SiriUIPresentation>
{
    _Bool _needsUpdatedUtterances;	// 8 = 0x8
    AFUIStateMachine *_stateMachine;	// 16 = 0x10
    _Bool _userInteractionDidOccurSinceActivation;	// 24 = 0x18
    long long _currentRequestSource;	// 32 = 0x20
    _Bool _passcodeUnlockViewIsShowing;	// 40 = 0x28
    double _passcodeUnlockViewStartShowingTime;	// 48 = 0x30
    _Bool _emergencyCallViewIsShowing;	// 56 = 0x38
    double _emergencyCallViewStartShowingTime;	// 64 = 0x40
    _Bool _skipCheckForGuideUpdate;	// 72 = 0x48
    id <SiriUIPresentationDataSource> _dataSource;	// 80 = 0x50
    id <SiriUIPresentationDelegate> _delegate;	// 88 = 0x58
    SVSSuggestionsViewController *_siriUnavailableViewController;	// 96 = 0x60
    SVSPagerViewController *_pagerViewController;	// 104 = 0x68
    id <AFUIDebugControlling> _debugController;	// 112 = 0x70
    double _lastPresentationTime;	// 120 = 0x78
    UIAlertController *_debugAlertController;	// 128 = 0x80
    RadiosPreferences *_radioPreferences;	// 136 = 0x88
    UIViewController *_presentedViewControllerForDebugController;	// 144 = 0x90
}

@property(nonatomic) __weak UIViewController *presentedViewControllerForDebugController; // @synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(retain, nonatomic, getter=_debugAlertController) UIAlertController *debugAlertController; // @synthesize debugAlertController=_debugAlertController;
@property(nonatomic) double lastPresentationTime; // @synthesize lastPresentationTime=_lastPresentationTime;
@property(retain, nonatomic) id <AFUIDebugControlling> debugController; // @synthesize debugController=_debugController;
@property(readonly, nonatomic, getter=_pagerViewController) SVSPagerViewController *pagerViewController; // @synthesize pagerViewController=_pagerViewController;
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SVSSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100023a78
- (id)_topTranscriptViewController;	// IMP=0x00000001000238a8
- (id)_guideCheckSupportedFeatures;	// IMP=0x0000000100023780
- (void)_checkForGuideUpdatesIfNecessary;	// IMP=0x00000001000233c4
- (void)_handleWillLeaveEmergencyCallView:(id)arg1;	// IMP=0x00000001000233b4
- (void)_handleDidShowEmergencyCallView:(id)arg1;	// IMP=0x0000000100023368
- (void)siriNetworkAvailabilityDidChange;	// IMP=0x0000000100023300
- (void)_updateSiriAvailability:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000231f0
- (void)airplaneModeChanged;	// IMP=0x000000010002319c
- (void)_updateConversationAvailability:(unsigned long long)arg1;	// IMP=0x0000000100022eb0
- (void)changeUtterance:(id)arg1;	// IMP=0x0000000100022e44
- (void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000100022dbc
- (void)_requestUpdatedSuggestionsIfNecessary;	// IMP=0x0000000100022bcc
- (id)requestContext;	// IMP=0x0000000100022b78
- (_Bool)shouldDismissForIdling;	// IMP=0x0000000100022af8
- (double)idleTimerInterval;	// IMP=0x0000000100022ac0
- (void)_presentRadarComposeController;	// IMP=0x00000001000223b8
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022348
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000222f4
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010002226c
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x00000001000221e4
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100022158
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010002208c
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x0000000100021fe0
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x0000000100021f60
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x0000000100021ee0
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021ddc
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x0000000100021d84
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000100021d14
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000100021ca4
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100021c4c
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x0000000100021c00
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100021b50
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021af4
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021a68
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021a20
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002195c
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021950
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000218a0
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x000000010002175c
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x0000000100021714
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x00000001000216bc
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010002164c
- (void)transcriptStackViewControllerPulseHelpButton:(id)arg1;	// IMP=0x0000000100021604
- (void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(_Bool)arg2;	// IMP=0x00000001000215ac
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100021548
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x0000000100021468
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x0000000100021418
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010002138c
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021310
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x00000001000212cc
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x0000000100021288
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010002122c
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x00000001000211f8
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x000000010002117c
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x0000000100021178
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000210c4
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021068
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021058
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100021004
- (void)debugController:(id)arg1 openURL:(id)arg2;	// IMP=0x0000000100020f8c
- (void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020f1c
- (void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;	// IMP=0x0000000100020e34
- (void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;	// IMP=0x0000000100020d24
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;	// IMP=0x0000000100020c28
- (struct CGRect)statusBarFrameForSirilandView:(id)arg1;	// IMP=0x0000000100020bac
- (void)pagerViewControllerDidChangeTransitionState:(id)arg1;	// IMP=0x0000000100020a7c
- (void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3;	// IMP=0x0000000100020700
- (void)siriDidDetectMusic;	// IMP=0x00000001000205fc
- (void)_hideAcousticIDSpinner;	// IMP=0x00000001000204a4
- (void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;	// IMP=0x00000001000203c4
- (void)didReceiveDismissalAction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000203b0
- (void)speechRecordingDidDetectSpeechStartpoint;	// IMP=0x0000000100020370
- (void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3;	// IMP=0x00000001000201bc
- (void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x0000000100020008
- (void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x000000010001fe5c
- (_Bool)_shouldEnableIdleTimerForRequestSource:(long long)arg1 andAVRecordRoute:(id)arg2;	// IMP=0x000000010001fdec
- (void)didReceiveBugButtonLongPress;	// IMP=0x000000010001f8d4
- (void)didReceiveReportBugAction;	// IMP=0x000000010001f8c8
- (void)didReceiveHelpAction;	// IMP=0x000000010001f4bc
- (_Bool)supportsTextInput;	// IMP=0x000000010001f4b4
- (void)siriRequestWillStart;	// IMP=0x000000010001f474
- (id)configureOptionsForImminentRequest:(id)arg1;	// IMP=0x000000010001f3e8
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x000000010001f29c
- (void)siriDidHidePasscodeUnlock;	// IMP=0x000000010001f24c
- (void)siriWillHidePasscodeUnlock;	// IMP=0x000000010001f248
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x000000010001f19c
- (void)siriWillShowPasscodeUnlock;	// IMP=0x000000010001f18c
- (void)reloadData;	// IMP=0x000000010001f144
- (void)startNewConversation;	// IMP=0x000000010001f0d4
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x000000010001f064
- (void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001efd8
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x000000010001ef0c
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001ee80
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001ecd4
- (void)userInteractionDidOccur;	// IMP=0x000000010001ebc8
- (void)siriDidDeactivate;	// IMP=0x000000010001e9f8
- (_Bool)_isUsingBuiltInSpeaker;	// IMP=0x000000010001e82c
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x000000010001e49c
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x000000010001e36c
- (void)statusBarFrameDidChange;	// IMP=0x000000010001e2e8
- (id)viewController;	// IMP=0x000000010001e2e4
- (void)_speakText:(id)arg1;	// IMP=0x000000010001e2d4
- (void)_speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e248
- (void)_cancelRequest;	// IMP=0x000000010001e200
- (id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2;	// IMP=0x000000010001e178
- (id)_createTranscriptStackViewController;	// IMP=0x000000010001e134
- (id)_transcriptStackViewControllerForConversation:(id)arg1;	// IMP=0x000000010001e06c
- (id)_freshTranscriptStackViewController;	// IMP=0x000000010001dfa0
- (id)_activeTranscriptStackViewController;	// IMP=0x000000010001df4c
- (id)_previousTranscriptStackViewController;	// IMP=0x000000010001de88
- (id)_transcriptStackViewControllers;	// IMP=0x000000010001de34
- (id)_itemInCurrentConversationAtIndexPath:(id)arg1;	// IMP=0x000000010001ddb0
- (id)_itemInPreviousConversationAtIndexPath:(id)arg1;	// IMP=0x000000010001dd2c
- (id)_activeConversation;	// IMP=0x000000010001dc7c
- (id)_previousConversation;	// IMP=0x000000010001dbec
- (id)_identifierOfPreviousConversation;	// IMP=0x000000010001db64
- (id)_conversationIdentifiers;	// IMP=0x000000010001db08
- (void)_performTransitionForEvent:(long long)arg1;	// IMP=0x000000010001d7bc
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;	// IMP=0x000000010001d75c
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;	// IMP=0x000000010001d6e4
- (long long)_state;	// IMP=0x000000010001d698
- (id)_stateMachine;	// IMP=0x000000010001d4f4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001d404
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001d308
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d270
- (void)viewDidLoad;	// IMP=0x000000010001d0e0
- (void)loadView;	// IMP=0x000000010001d08c
- (void)dealloc;	// IMP=0x000000010001cfac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000010001cd14
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010001ccb0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001cc4c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001cc30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSSirilandView *view; // @dynamic view;

@end
