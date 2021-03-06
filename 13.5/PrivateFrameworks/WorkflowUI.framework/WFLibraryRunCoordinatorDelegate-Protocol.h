//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFAction, WFLibraryRunCoordinator, WFWorkflowControllerState, WFWorkflowReference;
@protocol WFUserInterface;

@protocol WFLibraryRunCoordinatorDelegate <NSObject>
- (id <WFUserInterface>)runCoordinator:(WFLibraryRunCoordinator *)arg1 userInterfaceForWorkflow:(WFWorkflowReference *)arg2;

@optional
- (_Bool)runCoordinator:(WFLibraryRunCoordinator *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (void)runCoordinator:(WFLibraryRunCoordinator *)arg1 handOffWithState:(WFWorkflowControllerState *)arg2 completionHandler:(void (^)(_Bool))arg3;
@end

