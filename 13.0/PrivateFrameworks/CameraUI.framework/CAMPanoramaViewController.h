//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CameraUI/CAMPanoramaChangeDelegate-Protocol.h>
#import <CameraUI/CAMPanoramaViewDelegate-Protocol.h>

@class CAMPanoramaView, CMMotionManager, CUCaptureController, NSString, UITapGestureRecognizer;

@interface CAMPanoramaViewController : UIViewController <CAMPanoramaViewDelegate, CAMPanoramaChangeDelegate>
{
    _Bool _painting;
    long long _layoutStyle;
    CUCaptureController *__captureController;
    CMMotionManager *__motionManager;
    long long __captureOrientation;
    UITapGestureRecognizer *__directionChangeGestureRecognizer;
}

@property(readonly, nonatomic) UITapGestureRecognizer *_directionChangeGestureRecognizer; // @synthesize _directionChangeGestureRecognizer=__directionChangeGestureRecognizer;
@property(nonatomic, setter=_setCaptureOrientation:) long long _captureOrientation; // @synthesize _captureOrientation=__captureOrientation;
@property(retain, nonatomic, setter=_setMotionManager:) CMMotionManager *_motionManager; // @synthesize _motionManager=__motionManager;
@property(readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property(nonatomic, getter=isPainting, setter=_setPainting:) _Bool painting; // @synthesize painting=_painting;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)panoramaConfigurationDidChangeWithDirection:(long long)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)_updateWithAccelerometerData:(id)arg1 captureOrientation:(long long)arg2;
- (void)_createMotionManagerIfNecessary;
- (void)updateWithStatus:(id)arg1;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(id)arg1 toDirection:(long long)arg2;
- (void)_handleDirectionChange:(id)arg1;
- (void)finishedProcessingPanorama;
- (void)startProcessingPanorama;
- (void)stopPainting;
- (void)startPainting;
- (void)didChangeToCaptureOrientation:(long long)arg1;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
@property(readonly, nonatomic) CAMPanoramaView *panoramaView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithCaptureController:(id)arg1 layoutStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

