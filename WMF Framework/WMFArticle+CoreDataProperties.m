#import "WMFArticle+CoreDataProperties.h"

@implementation WMFArticle (CoreDataProperties)

+ (NSFetchRequest<WMFArticle *> *)fetchRequest {
    return [[NSFetchRequest alloc] initWithEntityName:@"WMFArticle"];
}

@dynamic displayTitle;
@dynamic displayTitleHTMLString;
@dynamic geoDimensionNumber;
@dynamic geoTypeNumber;
@dynamic imageHeight;
@dynamic imageURLString;
@dynamic imageWidth;
@dynamic isCached;
@dynamic isDownloaded;
@dynamic isExcludedFromFeed;
@dynamic key;
@dynamic latitude;
@dynamic longitude;
@dynamic newsNotificationDate;
@dynamic pageViews;
@dynamic placesSortOrder;
@dynamic savedDate;
@dynamic signedQuadKey;
@dynamic snippet;
@dynamic thumbnailURLString;
@dynamic viewedDate;
@dynamic viewedDateWithoutTime;
@dynamic viewedFragment;
@dynamic viewedScrollPosition;
@dynamic wasSignificantlyViewed;
@dynamic wikidataDescription;
@dynamic wikidataID;
@dynamic readingLists;
@dynamic previewReadingLists;
@dynamic errorCodeNumber;
@dynamic ns;

@end
