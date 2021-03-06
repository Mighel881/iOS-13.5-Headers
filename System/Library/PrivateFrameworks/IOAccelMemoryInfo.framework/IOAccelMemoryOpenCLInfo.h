/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject {

	int pid;
	NSString* cl_context;
	unsigned long long cl_mem;
	NSString* objectType;
	NSString* objectDescription;
	id _expansionData;

}

@property (assign) int pid; 
@property (retain) NSString * cl_context; 
@property (assign) unsigned long long cl_mem; 
@property (retain) NSString * objectType; 
@property (retain) NSString * objectDescription; 
-(void)dealloc;
-(id)description;
-(NSString *)objectType;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setObjectType:(NSString *)arg1 ;
-(NSString *)objectDescription;
-(void)setObjectDescription:(NSString *)arg1 ;
-(NSString *)cl_context;
-(unsigned long long)cl_mem;
-(void)setCl_context:(NSString *)arg1 ;
-(void)setCl_mem:(unsigned long long)arg1 ;
@end

