//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SSSScreenshotContentOverlayController.h"

#import "AKControllerDelegateProtocol-Protocol.h"
#import "PDFAKControllerDelegateProtocol-Protocol.h"

@class AKPageModelController, NSString, _SSSScreenshotAnnotationControllerAKOverlayContainerView;

@interface _SSSScreenshotAnnotationController : _SSSScreenshotContentOverlayController <AKControllerDelegateProtocol, PDFAKControllerDelegateProtocol>
{
    AKPageModelController *_pageModelController;
    _SSSScreenshotAnnotationControllerAKOverlayContainerView *_overlayView;
}

+ (id)annotationsFromAnnotationData:(id)arg1;
+ (id)annotationDataFromAnnotations:(id)arg1;
- (void).cxx_destruct;
- (void)handleDrawingGestureRecognizerUpdate:(id)arg1;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)controllerDidDismissPopover:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (_Bool)_updateAnnotationsForViewState:(CDStruct_6a6871ea)arg1 createUndoCommand:(_Bool)arg2;
- (_Bool)_updateAnnotationsForViewState:(CDStruct_6a6871ea)arg1;
- (void)_updateAnnotationsCreateUndoCommand:(_Bool)arg1;
- (void)_updateAnnotations;
- (void)endedEditingWithOverlay;
- (void)enteredEditingWithOverlay;
- (void)updateUndoState;
- (void)setGesturesEnabled:(_Bool)arg1;
- (id)rotationGestureRecognizer;
- (id)panGestureRecognizer;
- (id)longPressGestureRecognizer;
- (id)doubleTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (id)gestureRecognizers;
- (struct CGRect)rectToCenterAboveKeyboard;
- (id)overlayView;
- (void)setScreenshot:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (void)_enableInkingOnAKController:(_Bool)arg1;
- (void)_prepareAKController;
- (id)pageModelController;
- (_Bool)_isEditingScreenshotImage;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

