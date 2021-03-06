/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AXElementGroup;


@protocol AXGroupable <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup; 
@required
-(CGRect)frame;
-(BOOL)isGroup;
-(AXElementGroup *)parentGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(void)setParentGroup:(id)arg1;

@end

