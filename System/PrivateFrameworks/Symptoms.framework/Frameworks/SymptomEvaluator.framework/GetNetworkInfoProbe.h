/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)stopTest;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(id)probeOutputFilePaths;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
@end

