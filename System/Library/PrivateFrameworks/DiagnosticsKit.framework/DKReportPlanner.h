/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DKReporterRegistry;

@interface DKReportPlanner : NSObject {

	DKReporterRegistry* _registry;

}

@property (nonatomic,retain) DKReporterRegistry * registry;              //@synthesize registry=_registry - In the implementation block
+(id)plannerWithReportGeneratorRegistry:(id)arg1 ;
-(DKReporterRegistry *)registry;
-(void)setRegistry:(DKReporterRegistry *)arg1 ;
-(id)requestGroupsForPredicateManifest:(id)arg1 ;
-(id)initWithReportGeneratorRegistry:(id)arg1 ;
-(id)_resolveComponentIdentityManifest:(id)arg1 ;
@end
