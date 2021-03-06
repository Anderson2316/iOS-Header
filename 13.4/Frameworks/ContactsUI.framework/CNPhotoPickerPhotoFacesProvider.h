//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProvider-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPhotoFacesProvider : NSObject <CNPhotoPickerProvider>
{
    NSString *identifier;
    CNContact *_contact;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (struct CGRect)cropRectForAsset:(id)arg1 face:(id)arg2;
- (id)getItemsFromPhotoLibraryWithItemDelegate:(id)arg1;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

