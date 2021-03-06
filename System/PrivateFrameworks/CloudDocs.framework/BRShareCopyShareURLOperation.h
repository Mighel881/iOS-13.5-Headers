/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare, NSString, NSError;

@interface BRShareCopyShareURLOperation : BROperation {

	CKShare* _share;
	NSString* _appName;
	NSError* _error;
	/*^block*/id _shareCopyURLCompletionBlock;
	/*^block*/id _copyShareURLCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (copy) id shareCopyURLCompletionBlock;              //@synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock - In the implementation block
@property (copy) id copyShareURLCompletionBlock;              //@synthesize copyShareURLCompletionBlock=_copyShareURLCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NSString *)appName;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 documentType:(id)arg2 ;
-(void)setAppName:(NSString *)arg1 ;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(id)_initWithShare:(id)arg1 documentType:(id)arg2 ;
-(id)copyShareURLCompletionBlock;
-(void)setCopyShareURLCompletionBlock:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 documentType:(id)arg2 ;
@end

