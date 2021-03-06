//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getMKMapSnapshotImageForSize:(struct CGSize)arg1 scale:(double)arg2 named:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;

@end

