//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIInputViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUICheckboxInputViewElement : SKUIInputViewElement
{
    BOOL _disabled;
    _Bool _selected;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (unsigned long long)elementType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

