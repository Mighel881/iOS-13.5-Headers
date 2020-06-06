/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MTLLibrarySPI <MTLLibrary>
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@required
-(NSArray *)externFunctionNames;
-(id)newExternFunctionWithName:(id)arg1;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(NSString *)overrideTriple;
-(void)setOverrideTriple:(id)arg1;

@end
