/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <ComponentKit/ComponentKit-Structs.h>
@class NSThread;

@interface CKTransactionalComponentDataSourceConfiguration : NSObject {

	CKSizeRange _sizeRange;
	Class _componentProvider;
	id<NSObject> _context;
	NSThread* _workThreadOverride;

}

@property (nonatomic,readonly) NSThread * workThreadOverride;              //@synthesize workThreadOverride=_workThreadOverride - In the implementation block
@property (nonatomic,readonly) Class componentProvider;                    //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                       //@synthesize context=_context - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)context;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const CKSizeRange*)arg3 ;
-(NSThread *)workThreadOverride;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const CKSizeRange*)arg3 workThreadOverride:(id)arg4 ;
-(const CKSizeRange*)sizeRange;
-(Class)componentProvider;
@end
