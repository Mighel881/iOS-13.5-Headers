/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, TSUReadChannel;
@class NSObject;

@interface TSUZipFileDescriptorWrapper : NSObject {

	NSObject*<OS_dispatch_group> _accessGroup;
	int _fileDescriptor;
	id<TSUReadChannel> _readChannel;

}

@property (nonatomic,readonly) int fileDescriptor;                          //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<TSUReadChannel> readChannel;              //@synthesize readChannel=_readChannel - In the implementation block
-(id)init;
-(void)dealloc;
-(int)fileDescriptor;
-(id<TSUReadChannel>)readChannel;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(void)waitForAccessToEnd;
-(void)beginAccess;
-(void)endAccess;
@end
