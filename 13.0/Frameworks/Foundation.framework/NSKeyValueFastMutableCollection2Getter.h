//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueMutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter
{
    NSKeyValueGetter *_baseGetter;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

- (id)mutatingMethods;
- (id)baseGetter;
- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;

@end

