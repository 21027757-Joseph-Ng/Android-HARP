using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Extensions
{
	[MixedRealityExtensionService(SupportedPlatforms.WindowsStandalone | SupportedPlatforms.MacStandalone | SupportedPlatforms.LinuxStandalone | SupportedPlatforms.WindowsUniversal)]
	public class ApiKeyService : BaseExtensionService, IApiKeyService, IMixedRealityExtensionService
	{
		private static ApiKeyServiceProfile _apiKeyServiceProfile;

		public ApiKeyService(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile)
		{
			_apiKeyServiceProfile = (ApiKeyServiceProfile)profile;
		}


		public override void Initialize()
		{
			base.Initialize();

			// Do service initialization here.
		}

		public override void Update()
		{
			base.Update();

			// Do service updates here.
		}

		public static string graphTodoListApi => _apiKeyServiceProfile.graphTodoListApi;
		public static string graphTodoListKey => _apiKeyServiceProfile.graphTodoListKey;
		public static string graphTodoListClientId => _apiKeyServiceProfile.graphTodoListClientId;
		public static string customVisionPredictionApi => _apiKeyServiceProfile.customVisionPredictionApi;
		public static string customVisionPredictionKey => _apiKeyServiceProfile.customVisionPredictionKey;
		public static string facePredictionApi => _apiKeyServiceProfile.facePredictionApi;
		public static string facePredictionKey => _apiKeyServiceProfile.facePredictionKey;
	}
}
