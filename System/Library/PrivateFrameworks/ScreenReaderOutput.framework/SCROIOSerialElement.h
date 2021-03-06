/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/SCROIOElement.h>
#import <libobjc.A.dylib/SCROIOSerialElementProtocol.h>

@class NSString;

@interface SCROIOSerialElement : SCROIOElement <SCROIOSerialElementProtocol> {

	int _fileDescriptor;

}

@property (assign,nonatomic) int fileDescriptor;                    //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(int)identifier;
-(int)fileDescriptor;
-(id)initWithFileDescriptor:(int)arg1 ;
-(int)transport;
-(void)setFileDescriptor:(int)arg1 ;
@end

