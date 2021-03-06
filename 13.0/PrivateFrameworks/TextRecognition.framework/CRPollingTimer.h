//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRPollingTimer : NSObject
{
    CDStruct_1b6d18a9 _fireTime;
    _Bool _fired;
    _Bool _valid;
    id _target;
    SEL _selector;
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool fired; // @synthesize fired=_fired;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)invalidate;
- (void)evalAtTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 fireTime;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

