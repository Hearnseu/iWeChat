//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCActionSheetDelegate-Protocol.h"

@class CaptureVideoInfo, MMLoadingView, NSString, UINavigationController;

@interface WAJSEventHandler_chooseVideo : WAJSEventHandler_BaseEvent <WCActionSheetDelegate>
{
    UINavigationController *m_oVideoPicker;
    CaptureVideoInfo *m_oVideoInfo;
    MMLoadingView *m_loadingView;
    _Bool _isFromPicker;
    unsigned int _maxDuration;
    _Bool _isCameraMode;
    _Bool _isFrontCamera;
    _Bool _isCompressed;
}

- (void).cxx_destruct;
- (void)setVideoPreviewHidden:(_Bool)arg1 inPicker:(id)arg2;
- (void)asyncHandleCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didTakeVideo:(CDUnknownBlockType)arg1;
- (int)getVideoDuration:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)processVideoFromPicker:(id)arg1;
- (void)initLoadingView;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showVideoPickerCameraMode:(_Bool)arg1 isFrontCamera:(_Bool)arg2 maxDuration:(unsigned int)arg3;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

