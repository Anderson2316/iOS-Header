//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UIScrollViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIScrollView;

@interface PKRecognitionDrawingPreviewViewController : UIViewController <UIScrollViewDelegate>
{
    UIImage *_drawingImage;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *drawingImage; // @synthesize drawingImage=_drawingImage;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)centerImageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDrawingImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

