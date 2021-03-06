/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying> {

	WFContentProperty* _property;

}

@property (nonatomic,copy,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(WFContentProperty *)property;
@end

