#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMFSession;
@class WMFConfiguration;

// Bridge from old Obj-C fetcher classes to new Swift fetcher class
@interface WMFLegacyFetcher : NSObject

@property (nonatomic, readonly) WMFSession *session;
@property (nonatomic, readonly) WMFConfiguration *configuration;

- (NSURLSessionTask *)performMediaWikiAPIGETForURL:(NSURL *)URL withQueryParameters:(NSDictionary<NSString *, id> *)queryParameters completionHandler:(void (^)(NSDictionary<NSString *,id> * _Nullable result, NSHTTPURLResponse * _Nullable response, NSError * _Nullable error)) completionHandler;
- (NSURLSessionTask *)performCancelableMediaWikiAPIGETForURL:(NSURL *)URL cancellationKey:(NSString *)cancellationKey withQueryParameters:(NSDictionary<NSString *, id> *)queryParameters completionHandler:(void (^)(NSDictionary<NSString *,id> * _Nullable result, NSHTTPURLResponse * _Nullable response, NSError * _Nullable error)) completionHandler;

- (void)cancelAllFetches; // only cancels tasks started with the methods provided by WMFLegacyFetcher - tasks started directly on the session are not canceled
- (void)cancelTaskWithCancellationKey:(NSString *)cancellationKey;

@end

NS_ASSUME_NONNULL_END