//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFAutomationSummaryViewController, WFConfiguredTriggerRecord, WFWorkflow;

@protocol WFAutomationSummaryViewControllerDelegate <NSObject>
- (void)automationSummaryViewController:(WFAutomationSummaryViewController *)arg1 didFinishWithTrigger:(WFConfiguredTriggerRecord *)arg2;

@optional
- (void)automationSummaryViewController:(WFAutomationSummaryViewController *)arg1 editWorkflow:(WFWorkflow *)arg2;
- (void)automationSummaryViewController:(WFAutomationSummaryViewController *)arg1 editTrigger:(WFConfiguredTriggerRecord *)arg2;
@end

