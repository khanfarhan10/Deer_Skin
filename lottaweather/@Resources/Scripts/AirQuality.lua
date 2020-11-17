function airQualityPhrase(amount, matter)

	if (matter == "NO2") then
		if (amount < 40) then
			return "Low"
		elseif (amount < 80) then
			return "Moderate"
		elseif (amount < 120) then
			return "High"
		elseif (amount < 160) then
			return "Potentially Unhealthy"
		elseif (amount < 200) then
			return "Unhealthy"
		elseif (amount > 200) then
			return "Dangerous"
		end
		
	elseif (matter == "O3") then
		if (amount < 70) then
			return "Low"
		elseif (amount < 100) then
			return "Moderate"
		elseif (amount < 130) then
			return "High"
		elseif (amount < 160) then
			return "Potentially Unhealthy"
		elseif (amount < 240) then
			return "Unhealthy"
		elseif (amount > 240) then
			return "Very Unhealthy"
		end
		
	elseif (matter == "SO2") then
		if (amount < 10) then
			return "Low"
		elseif (amount < 50) then
			return "Moderate"
		elseif (amount < 125) then
			return "High"
		elseif (amount < 250) then
			return "Potentially Unhealthy"
		elseif (amount < 500) then
			return "Unhealthy"
		elseif (amount > 500) then
			return "Very Unhealthy"
		end
		
	elseif (matter == "PM25") then
		if (amount < 10) then
			return "Low"
		elseif (amount < 15) then
			return "Moderate"
		elseif (amount < 20) then
			return "High"
		elseif (amount < 25) then
			return "Potentially Unhealthy"
		elseif (amount < 35) then
			return "Unhealthy"
		elseif (amount > 35) then
			return "Dangerous"
		end
		
	elseif (matter == "PM10") then
		if (amount < 20) then
			return "Low"
		elseif (amount < 50) then
			return "Moderate"
		elseif (amount < 75) then
			return "Potentially Unhealthy"
		elseif (amount < 100) then
			return "Unhealthy"
		elseif (amount > 100) then
			return "Very Unhealthy"
		end
		
	end

end