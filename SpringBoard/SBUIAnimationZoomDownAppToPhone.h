/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBUIAnimationZoomDownApp.h"

@interface SBUIAnimationZoomDownAppToPhone : SBUIAnimationZoomDownApp
{
    BOOL _usingSuperZoomImplementation;
}

- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (BOOL)_shouldZoomUsingSuperImplementation;
- (id)_animationProgressDependency;
- (void)dealloc;
- (void)_cleanupPhonesContextHostView;
- (CDStruct_5d575efc)fakeStatusBarInfoWithStartEffectivelyHidden:(BOOL)arg1 endStyle:(int)arg2 endOrientation:(int)arg3;

@end

