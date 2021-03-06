//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionHandler.h"

__attribute__((visibility("hidden")))
@interface MSPCollectionHandler : CollectionHandler
{
    _Bool _needsToBePersisted;
}

@property(nonatomic) _Bool needsToBePersisted; // @synthesize needsToBePersisted=_needsToBePersisted;
- (int)showAction;
- (void)updateCollection:(CDUnknownBlockType)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)updateWithMSPCollection:(id)arg1;
- (void)rebuildContent;
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)updateImage:(id)arg1;
- (_Bool)updateTitle:(id)arg1;
- (_Bool)containsMapItem;
- (_Bool)canMove;
- (_Bool)canDeleteOnly;
- (_Bool)canEditPhotoOnly;
- (_Bool)isSystemCollection;
- (id)title;
- (id)identifier;
- (id)sharingURL;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCollection:(id)arg1;

@end

