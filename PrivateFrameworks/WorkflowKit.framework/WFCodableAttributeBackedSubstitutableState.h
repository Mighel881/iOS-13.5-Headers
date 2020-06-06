/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class INCodableAttribute;

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState {

	INCodableAttribute* _codableAttribute;

}

@property (nonatomic,readonly) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
-(id)serializedRepresentation;
-(INCodableAttribute *)codableAttribute;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithValue:(id)arg1 codableAttribute:(id)arg2 ;
@end
